void check_name(student k)
{
    //Add your code here.
    string s1=k.first_name;

    string s2=k.last_name;

    

    sort(s1.begin(),s1.end());

    sort(s2.begin(),s2.end());

    

    if(s1==s2)

    {

        cout<<"ANAGRAM"<<endl;

    }

    else

    {

        cout<<"NOT ANAGRAM"<<endl;

    }
}
