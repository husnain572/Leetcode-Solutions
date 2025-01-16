# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry=0
        head=None
        current=None
        while l1!=None or l2!=None or carry!=0:
            if l1:
                val1=l1.val
                l1=l1.next
            else:
                val1=0
            if l2:
                val2=l2.val
                l2=l2.next
            else:
                val2=0              
            
            total=val1+val2+carry
            carry=total//10
            total=total%10
            # NewNode=ListNode()
            if head==None:
                head=ListNode(total)
                current=head
            else:
                current.next=ListNode(total)
                current=current.next
        return head
