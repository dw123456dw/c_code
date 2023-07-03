#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
void isfile(char* name);
//处理目录
void read_dir(char* dir)
{
	DIR* dp;
	char path[256];
	dp = opendir(dir);
	if(dp==NULL)
	{
		perror("opendir erroe");
		return ;
	}
	struct dirent *sdp;
	//读取目录项
	while((sdp = readdir(dp))!=NULL)
	{
		//排除隐藏的.和..目录
		if(strcmp(sdp->d_name,".")==0 || strcmp(sdp->d_name,"..")==0)
		{
			continue;
		}
		//注意需要拼接路径
		sprintf(path,"%s/%s",dir,sdp->d_name);
		//判断文件类型目录递归加入文件显示
		isfile(path);
	}

	closedir(dp);
	return ;
}
void isfile(char* name)
{
	int ret=0;
	struct stat sb;
	ret = stat(name,&sb);      //获取文件属性，判断文件类型
	if(ret==-1)
	{
		perror("stat error");
		return ;
	}	
	if(S_ISDIR(sb.st_mode))     //是目录
	{
		read_dir(name);
	}	
	printf("%s\t%ld\n",name,sb.st_size);    //普通文件，显示名字和大小
	return ;
}

int main(int argc,char* argv[])
{
	if(argc==1)
	{
		isfile(".");	
	}
	else
	{
		isfile(argv[1]);
	}
	return 0;
}
