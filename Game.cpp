#include <bits/stdc++.h>
#include <ctime>
#include <fstream>
using namespace std;
void dices_show(int n);
void start(void);
void end(int m,double e);
int  show(void);
void road_map(void);
vector <char> odd_even;
vector <char> big_small;
vector <int> sum;
vector <int> combination;
int wok (void);

int wok(){
	int k=0;
	cout <<"你來到洗車店打工，"<<'\n';
	cout <<"洗車的步驟有三項 : 1.沖水 2.噴泡沫 3.擦乾"<<'\n';
	cout <<"你的任務就是依序輸入wash、foam、dry"<<'\n';
	cout <<"每洗完一輛車你將會得到100元的報酬，但請注意如果洗車順序錯誤或是出現錯誤，老闆會扣你的薪水喔"<<'\n';
	cout <<"此外洗車時你可以輸入b結束打工"<<'\n';
	system("pause");
	int car=1;
	while (true){
		cout <<"第"<<car<<"台車來了!!"<<'\n';
		cout <<"目前薪水:"<<k<<"元"<<'\n'; 
		for (int i=0;i<3;i++){
			string m;
			if (i==0){
				cin>>m;
				if (m=="b"){
					return max(k,0);
				}
				else if (m=="wash"){
					cout <<"幹的好!"<<'\n';
				}
				else{
					cout <<"你因為犯錯被老闆扣了200元薪水:("<<'\n';
					k-=200;
				}
			}
			else if (i==1){
				cin>>m;
				if (m=="b"){
					return max(k,0);
				}
				else if (m=="foam"){
					cout <<"幹的好!"<<'\n';
				}
				else{
					cout <<"你因為犯錯被老闆扣了200元薪水:("<<'\n';
					k-=200;
				}
			}
			else if (i==2){
				cin>>m;
				if (m=="b"){
					return max(k,0);
				}
				else if (m=="dry"){
					cout <<"幹的好!"<<'\n';
				}
				else{
					cout <<"你因為犯錯被老闆扣了200元薪水:("<<'\n';
					k-=200;
				}
			}
		}
		k+=100;
		system("cls");
	} 
}



void road_map(){
    cout <<"【單/雙】"<<'\n';
    cout <<'\t';
    for (int i=0;i<odd_even.size();i++){
        cout <<odd_even[i]<<' ';
    }
    cout <<'\n';

    cout <<"【大/小】"<<'\n';
    cout<<'\t';
    for (int i=0;i<big_small.size();i++){
        cout<<big_small[i]<<' ';
    }
    cout <<'\n';
    
    cout <<"【總和】"<<'\n';
    cout <<'\t';
    for (int i=0;i<sum.size();i++){
        cout <<sum[i]<<' ';
    }
    cout <<'\n';

    cout <<"【組合】"<<'\n';
    cout <<'\t';
    for (int i=0;i<combination.size();i+=3){
        cout <<combination[i]<<combination[i+1]<<combination[i+2]<<' ';
    }
    cout <<'\n';

    system("pause");
}

void end(int m,double e){
	system("cls");
	cout <<"-------------------------------"<<'\n';
	cout <<"|   G  A  M  E    O  V  E  R  |"<<'\n';
	cout <<"-------------------------------"<<'\n';
	cout <<'\n';
	if (m==0){
		cout <<"您輸光了所有積蓄!因此被保鑣(xiao)趕出賭場!"<<'\n';
	}
	
	cout <<'\n'<<"離場共帶走"<<m<<"元"<<'\n';
	
	system("pause");
}

void dices_show(int n){
    for (int i=0;i<2;i++){
        for (int j=0;j<6;j++){
            if (j==0){
                cout <<"---------"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"|   ●  |"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"點!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==1){
                cout <<"---------"<<'\n';
                cout <<"|     ●|"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"| ●    |"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"點!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==2){
                cout <<"---------"<<'\n';
                cout <<"|     ●|"<<'\n';
                cout <<"|   ●  |"<<'\n';
                cout <<"| ●    |"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"點!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==3){
                cout <<"---------"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"點!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==4){
                cout <<"---------"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"|   ●  |"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"點!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==5){
                cout <<"---------"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"| ●  ●|"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"點!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
        }
    }
}

int  show (){
    int n;
    
    cout <<"【第一區 大、小、單、雙】"<<'\n'<<"以下四門 一賠一 : "<<'\n';
    cout <<"(1).大"<<'\t'<<"(2). 小"<<'\t'<<"(3). 單"<<'\t'<<"(4). 雙"<<'\n'<<'\n';

    cout <<"【第二區 點數】"<<'\n'<<"以下六門 一賠一"<<'\n';
    cout <<"(5). 1點"<<'\t'<<"(6). 2點"<<'\t'<<"(7). 3點"<<'\t'<<"(8). 4點"<<'\t'<<"(9). 5點"<<'\t';
    cout <<"(10). 6點"<<'\n'<<'\n';

    cout <<"【第三區 組合】"<<'\n'<<"以下十五門 一賠五"<<'\n';
    cout <<"(11). 一、二"<<'\t'<<"(12). 二、四"<<'\t'<<"(13). 一、四"<<'\t'<<"(14). 二、三"<<'\t'<<"(15). 三、四"<<'\n';
    cout <<"(16). 二、五"<<'\t'<<"(17). 三、五"<<'\t'<<"(18). 二、六"<<'\t'<<"(19). 四、五"<<'\t'<<"(20). 三、六"<<'\n';
    cout <<"(21). 一、五"<<'\t'<<"(22). 一、六"<<'\t'<<"(23). 四、六"<<'\t'<<"(24). 五、六"<<'\t'<<"(25). 一、三"<<'\n'<<'\n';

    cout <<"【第四區 總和】"<<'\n';
    cout <<"以下四門 一賠六"<<'\n';
    cout <<"(26). 9"<<'\t'<<"(27). 10"<<'\t'<<"(28). 11"<<'\t'<<"(29). 12"<<'\n';
    cout <<"以下二門 一賠八"<<'\n';
    cout <<"(30). 13"<<'\t'<<"(31). 8"<<'\n';
    cout <<"以下二門 一賠十二"<<'\n';
    cout <<"(32). 14"<<'\t'<<"(33). 7"<<'\n';
    cout <<"以下二門 一賠十四"<<'\n';
    cout <<"(34). 15"<<'\t'<<"(35). 6"<<'\n';
    cout <<"以下二門 一賠十八"<<'\n';
    cout <<"(36). 16"<<'\t'<<"(37). 5"<<'\n';
    cout <<"以下二門 一賠五十"<<'\n';
    cout <<"(38). 17"<<'\t'<<"(39). 4"<<'\n'<<'\n';

    cout <<"【第五區 對子】"<<'\n'<<"以下六門 一賠八"<<'\n';
    cout <<"(40). 對一"<<'\t'<<"(41). 對二"<<'\t'<<"(42). 對三"<<'\t';
    cout <<"(43). 對四"<<'\t'<<"(44). 對五"<<'\t'<<"(45). 對六"<<'\n'<<'\n';

    cout <<"【第六區 全圍(三個骰子同色)】"<<'\n'<<"以下一門 一賠二十四"<<'\n';
    cout <<"(46). 全圍"<<'\n'<<'\n';

    cout <<"【第七區 圍骰(三個骰子同色 且為指定數字"<<'\n';
    cout <<"以下六門 一賠一百五十"<<'\n';
    cout <<"(47). 圍一"<<'\t'<<"(48). 圍二"<<'\t'<<"(49). 圍三"<<'\t';
    cout <<"(50). 圍四"<<'\t'<<"(51). 圍五"<<'\t'<<"(52). 圍六"<<'\n';

    cout <<"請選擇要下注的門 : "<<'\n';
    cout <<"輸入99可以查看賭局RoadMap"<<'\n';
    cout <<"或者，您可以輸入88離場結算"<<'\n'; 
    cin>>n;
    return n;
}


int main(){
    cout <<"骰寶遊戲"<<'\n';
    cout <<'\n'<<"請輸入1進入賭博模式"<<'\n';
    cout <<"輸入2則能進入打工模式"<<'\n';
    ifstream in;
    in.open("mney.txt");
    int money;
    in>>money;
	int lg;
	cin>>lg;
	
	if (lg==2){
		int salary=wok();
		cout <<"打工獲得薪水"<<salary<<"元"<<'\n';
		money+=salary;
		system("pause");
	}
    
    system("cls"); 
    
    double expected=10000;
    
    
    int bet;
    
    while (true){
    	ofstream out;
    	out.open("mney.txt");
    	out<<money;
        if (money==0){
            break;
        }
        srand( time(NULL)); 
        int dices[3];
        for (int i=0;i<3;i++){
            dices[i]=rand() % (6 - 1 + 1) + 1;
        }
        //dices[0]=2;
        //dices[1]=2;
        //dices[2]=5;
        int n;
        n=show();
        system("cls");
        
        
        if (n==99){
        	road_map();
        	system("cls");
		}
        
        else if (n==88){
        	break;
		}
        
        else if (n<1 || n>50){
            cout <<"您不可以輸入超過下注範圍的索引"<<'\n';
        }
        else {

            do{
                cout <<"您目前的資產 : "<<money<<"元"<<'\n';
                cout <<"請輸入您要下注的金額 : "<<'\n';
                cin>>bet;
            }
            while (bet>money || bet<=0);
            
            /*for (int i=0;i<3;i++){
                dices_show(dices[i]);
            }*/

            //big_small
            int t=0;
            for (int i=0;i<3;i++){
                t+=dices[i];
            }
            if (dices[0]==dices[1] && dices[1]==dices[2]){
                big_small.push_back('X');
            }
            else if (t>=4 && t<=10){
                big_small.push_back('S');
            }
            else if (t>=11 && t<=17){
                big_small.push_back('B');
            }
            

            //odd_even
            if (dices[0]==dices[1] && dices[1]==dices[2]){
                odd_even.push_back('X');
            }
            else if (t%2==0){
                odd_even.push_back('E');
            }
            else{
                odd_even.push_back('O');
            }

            //sum
            sum.push_back(t);

            //combination
            for (int i=0;i<3;i++){
                combination.push_back(dices[i]);
            }

            cout <<dices[0]<<' '<<dices[1]<<' '<<dices[2]<<'\n';
            if (n<=4){
            	expected-=bet*0.0278;
                int total=0;
                for (int i=0;i<3;i++){
                    total+=dices[i];
                }
                if (n==1){
                    if (total>=11 && total<=17){
                        money+=bet;
                        cout <<"您獲勝! 贏得"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                    else {
                        money-=bet;
                        cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                }
                else if (n==2){
                    if (total>=4 && total<=10){
                        money+=bet;
                        cout <<"您獲勝! 贏得"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                    else {
                        money-=bet;
                        cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                }
                else if (n==3){
                    if (total%2!=0){
                        money+=bet;
                        cout <<"您獲勝! 贏得"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                    else{
                        money-=bet;
                        cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                }
                else if (n==4){
                    if (total%2==0){
                        money+=bet;
                        cout <<"您獲勝! 贏得"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                    else{
                        money-=bet;
                        cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                }
            }
            else if (n<=10){
            	expected-=0.079*bet;
            	
                int k=n-4;
                int com=0;
                for (int i=0;i<3;i++){
                    if (dices[i]==k){
                        com++;
                    }
                }
                if (com==0){
                    money-=bet;
                    cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                    system("pause");
                }
                else{
                    money+=bet*com;
                    cout <<"您獲勝! 贏得"<<bet*com<<"元"<<'\n';
                    system("pause");
                }
            }
            else if (n<=25){
            	expected-=0.1667*bet;
                int k1,k2;
                if (n==11)  {
                    k1=1;
                    k2=2;
                }
                else if (n==12){
                    k1=2;
                    k2=4;
                }
                else if (n==13){
                    k1=1;
                    k2=4;
                }
                else if (n==14){
                    k1=2;
                    k2=3;
                }
                else if (n==15){
                    k1=3;
                    k2=4;
                }
                else if (n==16){
                    k1=2;
                    k2=5;
                }
                else if (n==17){
                    k1=3;
                    k2=5;
                }
                else if (n==18){
                    k1=2;
                    k2=6;
                }
                else if (n==19){
                    k1=4;
                    k2=5;
                }
                else if (n==20){
                    k1=3;
                    k2=4;
                }
                else if (n==21){
                    k1=1;
                    k2=5;
                }
                else if (n==22){
                    k1=1;
                    k2=6;
                }
                else if (n==23){
                    k1=4;
                    k2=6;
                }
                else if (n==24){
                    k1=5;
                    k2=6;
                }
                else if (n==25){
                    k1=1;
                    k2=3;
                }

                for (int i=0;i<3;i++){
                    if (dices[i]==k1){
                        k1=0;
                    }
                    if (dices[i]==k2){
                        k2=0;
                    }
                }

                if (k1==k2){
                    money+=bet*5;
                    cout <<"您獲勝! 贏得"<<bet*5<<"元"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                    system("pause");
                }
            }
            else if (n<=39){
                int total=0;
                for (int i=0;i<3;i++){
                    total+=dices[i];
                }
                if (n<=29){
                	expected-=0.125*bet;
                    if (n-17==total){
                        money+=bet*6;
                        cout <<"您獲勝! 贏得"<<bet*6<<"元"<<'\n';
                        system("pause");
                    }
                    else{
                        money-=bet;
                        cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                        system("pause");
                    }
                }
                else {
                	if (n==30){
                		expected-=0.1252*bet;
                		if (total==13){
                			money+=bet*8;
                			cout <<"您獲勝! 贏得"<<bet*8<<"元"<<'\n';
                			system("pause");
						}
						else{
							money-=bet;
							cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
						}
					}
					else if (n==31){
						expected-=0.1252*bet;
						if (total==8){
                            money+=bet*8;
                            cout <<"您獲勝! 贏得"<<bet*8<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
					}
                    else if (n==32){
                    	expected-=bet*0.0978;
                        if (total==14){
                            money+=bet*12;
                            cout <<"您獲勝! 贏得"<<bet*12<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==33){
                    	expected-=bet*0.0978;
                        if (total==7){
                            money+=bet*12;
                            cout <<"您獲勝! 贏得"<<bet*12<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==34){
                        if (total==15){
                        	expected-=0.3055*bet;
                            money+=bet*14;
                            cout <<"您獲勝! 贏得"<<bet*14<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==35){
                    	expected-=0.3055*bet;
                        if (total==6){
                            money+=bet*14;
                            cout <<"您獲勝! 贏得"<<bet*14<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==36){
                    	expected-=bet*0.4718;
                        if (total==16){
                            money+=bet*18;
                            cout <<"您獲勝! 贏得"<<bet*18<<"元"<<'\n';
                            system("pause");
                        }
                        else{
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==37){
                    	expected-=bet*0.4718;
                        if (total==5){
                            money+=bet*18;
                            cout <<"您獲勝! 贏得"<<bet*18<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==38){
                    	expected-=bet*0.2911;
                        if (total==17){
                            money+=bet*50;
                            cout <<"您獲勝! 贏得"<<bet*50<<"元"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==39){
                    	expected-=bet*0.2911;
                        if (total==4){
                            money+=bet*50;
                            cout <<"您獲勝! 贏得"<<bet*50<<"元"<<'\n';
                            system("pause");
                        }
                        else{
                            money-=bet;
                            cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                            system("pause");
                        }
                    }
                }

            }

            else if (n<=45){
            	expected-=0.3333*bet;
                int k=n-39;
                bool w=false;
                for (int i=0;i<3;i++){
                    if (dices[i]==k){
                        for (int j=i+1;j<3;j++){
                            if (dices[j]==k){
                                w=true;
                            }
                        }
                    }
                }
                if (w==true){
                    money+=bet*8;
                    cout <<"您獲勝! 贏得"<<bet*8<<"元"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                    system("pause");
                }
            }

            else if (n<=46){
            	expected-=0.3056*bet;
                if (dices[0]==dices[1] && dices[1]==dices[2]){
                    money+=bet*24;
                    cout <<"您獲勝! 贏得"<<bet*24<<"元"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                    system("pause");
                }
            }

            else if (n<=52){
            	expected-=0.3009*bet;
                int k=n-44;
                bool w=true;
                for (int i=0;i<3;i++){
                    if (dices[i]!=k){
                        w=false;
                    }
                }
                if (w==true){
                    money+=bet*150;
                    cout <<"您獲勝! 贏得"<<bet*150<<"元"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"很遺憾! 您失敗了 共賠"<<bet<<"元"<<'\n';
                    system("pause");
                }
            }
        }
    }
	end(money,expected);


    return 0;
}
