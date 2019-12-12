AryaCoin development tree

AryaCoin is a DPoW-based cryptocurrency.

DPOW was created by James (JL777) , who thought of this disadvantage of traditional POW used by blockchains with low network hashrates.  That is when he came up with DPOW , his idea was to "Using BTC as time sequence server to allow cross chain atomic swap and increase security of altchain" 

DPOW has been success for many other Altcoins , along with Komodo which was built on DPOW it self . Komodo uses 64 special nodes known as Notary nodes which are elected every year to ensure DPOW works efficiently.

Current DPOW solution uses bitcoin's blockchain to record the current state of the Altcoin's blockchain , which is then used as a reference to validate new blocks . 

DPOW uses all the POW core internals and just adds a layer of verification to ensure enhanced security .


Development process
Developers work in their own trees, then submit pull requests when they think their feature or bug fix is ready.

The patch will be accepted if there is broad consensus that it is a good thing. Developers should expect to rework and resubmit patches if they don't match the project's coding conventions (see coding.txt) or are controversial.

The master branch is regularly built and tested, but is not guaranteed to be completely stable. Tags are regularly created to indicate new stable release versions of AryaCoin.

Feature branches are created when there are major new features being worked on by several people.

From time to time a pull request will become outdated. If this occurs, and the pull is no longer automatically mergeable; a comment on the pull will be used to issue a warning of closure. The pull will be closed 15 days after the warning if action is not taken by the author. Pull requests closed in this manner will have their corresponding issue labeled 'stagnant'.

Issues with no commits will be given a similar warning, and closed after 15 days from their last activity. Issues closed in this manner will be labeled 'stale'.
