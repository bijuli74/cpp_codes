typedef vector<int> vi;
typedef vector<vi> vvi;


int edit_dist(const string& a, const string& b){
	
	vvi dist_btw_pref(a.size(), vi(b.size(), -1));
	
	return compDistbtwPref(a, a.size()-1, b, b.size()-1, &dist_btw_pref);
}

int compDistbtwPref(const string& a, int i, const string& b, int j,
																vvi* dist_btw_pref_ptr){
	vvi& dist_btw_pref = *dist_btw_pref_ptr;
	if(i < 0) {    //A is empty so add all of B's characters
		return j+1;
		
	} else if(j < 0) {  //B is empty so delete all of A's character
		return i+1;
	}
	if(dist_btw_pref[i][j] == -1){
		
		if(a[i] == b[j]){
			
			dist_btw_pref[i][j] = compDistbtwPref(a, i-1, b, j-1, dist_btw_pref_ptr);
		}
		else{
			
			int sub_last = compDistbtwPref(a, i-1, b, j-1, dist_btw_pref_ptr);
			int add_last = compDistbtwPref(a, i-1, b, j, dist_btw_pref_ptr);
			int del_last = compDistbtwPref(a, i, n, j-1, dist_btw_pref_ptr);
			
			dist_btw_pref[i][j] = 1+min({sub_last, add_last, del_last});
		}
	}
	return dist_btw_pref[i][j];
}
	
