//
//  Popular.swift
//  tripdeer
//
//  Created by Max Li on 26/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct Popular: View {
    let title = "Popular desination"
    var color:Color
    var body: some View {
        VStack {
            Title(title: title, color: color)
                .padding(.bottom)
            
            
            ScrollView(.horizontal, showsIndicators: false){
                HStack{
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                    
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                    VStack{
                        Image("japan").frame(width: 80.0, height: 80.0).clipped().cornerRadius(20)
                        
                        Text("japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white)
                    }
                }
            }
        }
        .frame(height: 200)
    }
}

struct Popular_Previews: PreviewProvider {
    static var previews: some View {
        Popular(color: Color.black)
    }
}
