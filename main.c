#include <stdio.h>
#include <stdlib.h>

int main()
{
    int love;//我对大傻瓜的爱
    //打印玲姐对大傻瓜的爱情程度
    printf("2017年2月6日\n");
    printf("这是一个值得纪念的日子\n");
    printf("因为那天是大学放寒假的日子，也是你表白的日子\n");
    printf("傻瓜向我表白的时候我的心情是怎样的,1代表激动，2代表害怕，3代表高兴：\n");
    //以下为情景设定
    scanf("%d",&love);
    switch(love)
    {
    case 1:
        printf("激动呢，其实咳咳说实话是因为我好久没有被人追过啦\n");
        break;
    case 2:
        printf("害怕是因为不知道该怎么办\n");
        break;
    case 3:
        printf("高兴是因为应验了我的梦，傻瓜，那个感冒灵的梦中男人就是你啊，我其实看清了那张脸的，只是不敢相信\n");
        break;
    default:
        printf("数字代表不了我的心，送你一首歌，爱久见人心\n");
    }
}
