int insertOwn(Owner Own[],int n,Owner s)        /*������������ָ�����ƺŵ�һ��Ԫ��*/
{
	int i;
	for(i=0;i<n;i++)                            /*���ƺ���ͬ��������룬��֤���ƺŵ�Ψһ��*/
	{
		if(equal(Own[i],s,1))
		{
			printf("this record exist,can not insert again!\n");
			return n;
		}
	}
	for(i<n-1;i>=0;i--)
	{
		Own[i+1]=Own[i];                            /*Ԫ��stu[i]����һ��λ��*/
	}
	Own[i+1]=s;                                      /*���±�i+1������Ԫ��s*/ 
	n++;                                            /*Ԫ�ظ�������1*/
	return n;                                         /*��������Ԫ�ظ���*/
}
int deleteOwn(Owner Own[],int n,Owner s)            /*��������ɾ��ָ�����ƺŵ�һ��Ԫ��*/
{
	int i,j;
	for (i=0;i<n;i++)                           /*Ѱ�Ҵ�ɾ����Ԫ��*/
		if (equal(Own[i],s,1))   break;            /*����ҵ����Ԫ�����˳�ѭ��*/
	if (i==n)                                 /*����Ҳ�����ɾ����Ԫ��*/
	{
		printf("This record does not exist!\n");    /*������ʾ��ϢȻ�󷵻�*/
		return n;
	}
	for (j=i; j<n-1; j++)                        /*�˴���������Ϊi<n��equal(stu[i],s,1)����*/ 
		Own[j]=Own[j+1];                       /*ͨ���ƶ�����ɾ���±�Ϊi��Ԫ��*/
                                                                            
	n--;                                      /*Ԫ�ظ������ټ�1*/
	return n;                                  /*�������и���*/
}
