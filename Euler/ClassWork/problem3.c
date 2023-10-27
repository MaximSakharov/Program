#include"Euler1.h"

unsigned long long Problem_3(long long delimoe_, long long delitel_)
{
   if (delimoe_ < 3)
      return delimoe_;
   
   if (delimoe_ % 2 == 0)
      while (delimoe_ % 2 == 0 & delimoe_>2)
         delimoe_ = delimoe_ / 2;

   for (delitel_; delitel_*delitel_ <= delimoe_; delitel_ += 2)
      if (delimoe_ % delitel_ == 0)
         return Problem_3(delimoe_ / delitel_, delitel_);
   
   return delimoe_;
}
