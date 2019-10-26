//
//  Popular.swift
//  tripdeer
//
//  Created by Max Li on 26/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct Popular: View {
    var body: some View {
        VStack {
        
            HStack{
                Text("Popular destination")
                    .font(.headline)
                    .fontWeight(.semibold)
                    .multilineTextAlignment(.leading)
                    .padding(.leading)
                    .frame(height: 30.0, alignment: .leading)

                 Spacer()
            }
            

            Rectangle()
                .fill(Color.orange)
                .frame(height: 160.0)
        }
    }
}

struct Popular_Previews: PreviewProvider {
    static var previews: some View {
        Popular()
    }
}
