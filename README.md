# Advanced Programming - Lab G

This tutorial introduces the reader how to use Parasoft.

---

## Q1. Parasoft

### Installing Parasoft C/C++ Static Test

This section is not required if running Parasoft in any CS Lab.

Follow the instructions on [Canvas - 500083](https://canvas.hull.ac.uk/courses/77769/files/6691466?module_item_id=1503261)

### Installing Parasoft C++ Test Rule Set

This section is required when running Parasoft either in a CS lab or at home.

Follow the instructions on [Canvas - 500083](https://canvas.hull.ac.uk/courses/77769/files/6691466?module_item_id=1503261)

### Using Parasoft C/C++ Test

**To run Parasoft when not in a CS Lab you'll need to connect to the University VPN (see [IT Knowledge Base](https://hull.service-now.com/student/en/vpn-setting-up-the-vpn-client-globalprotect-on-a-personal-device-windows?id=kb_article_view&sysparm_article=KB0010217)) so that Parasoft is able to contact its license server.**

Follow the instructions on [Canvas - 500083](https://canvas.hull.ac.uk/courses/77769/files/6691466?module_item_id=1503261)

**Your final lab work mark will be reduced if you have any severity 1, 2 or 3 violations.  Severity 4 and 5 can be treated as warnings.**

We are going to fix the first Severity 1 rule violation in `Utility.h` that Parasoft displays `A class 'Utility' must declare a copy assignment operator`

1. Go to the line of code (line 6 of `Utility.h`); this can be done by double-clicking on the violation.
2. Change this line appropriately.
3. Re-run Parasoft on the whole project, and you should see that there are now 10 violations, as we have now fixed the one on line 6.

Correct the other Severity 1 and 3 violations.  Do not worry about the other violations as you may not have covered these yet in the module.

**[Lab Book - Add screenshots of the Parasoft violation output.  Then describe the corrections you made to remove the Parasoft Severity 1 and 3 violations]**
