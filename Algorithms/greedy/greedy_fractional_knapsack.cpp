/* Knapsack problem with 
    capacity=W
    item_count=weight 
    number_of_items=number of items given to choose from
    items.first = value of each item
    items.second = number of each item

    returns maximum value
*/
bool compare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    double temp1,temp2;
    temp1=a.first/a.second;
    temp2=b.first/b.second;
    return (temp1>temp2);
}
double solution(ll capacity,vector<pair<ll,ll>> items,ll number_of_items)
{
    double max_val=0;
    ll i=0,item_count=0,k=0;
    sort(items.begin(),items.end(),compare);
    for(;i<number_of_items;i++){
        if(item_count + items[i].second <=capacity)
        { 
            max_val+=items[i].first;
            item_count+=items[i].second;
        }
        else {
            k=(capacity-item_count);
            max_val+=((double)k/items[i].second)*(double)items[i].first;
        }
    }   
    return max_val;
}