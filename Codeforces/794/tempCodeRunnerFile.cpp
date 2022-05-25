(int i=1;i<n-1;i++)
        {
            if((a[i-1]<a[i] && a[i]>a[i+1]) || (a[i-1]>a[i] && a[i]<a[i+1]))
            continue;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag && a[n-1]<=a[0])
            flag=0;
        if(flag==0)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";
        }
        //for(int i=0;i<n;i++)
        //cout<<a[i]<<" ";
        //cout<<"\n";
    }
    return 0;
}