class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ''
        non_asc = 'ç'
        for i in strs:
            encoded_string += i + non_asc
        return encoded_string

    def decode(self, s: str) -> List[str]:
        return_list = []    
        holder_list = ''
        for j in s:
            if j.isascii():
                holder_list += j
            else:
                return_list.append(holder_list)
                holder_list = ''
        
        return return_list  
