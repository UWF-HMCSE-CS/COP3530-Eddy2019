# Lab 2

## Purpose
The purpose of this lab is to get exposure to classes, file structures, and the make tool.

## Tasks
* Create 3 very simple classes.
	* Each class should be in its own set of two files, one header file `*.hpp` and one implementation file `*.cpp`.
	* Refer to [test/TestCase.cpp](test/TestCase.cpp) to know what those classes should be called.
	* Also in the test file are the methods that each class must have implemented.
		* Note that the methods are called three different ways.
		One of those ways indicates that your function declaration should be different from the others.

## Tips
* To run the unit tests you need to "fix", type `make clean test`.
* Programming is best done in small steps. If you are done with a project and it is your first time committing code and pushing to Github you're missing the point.
* In test-driven-development (TDD) the goal is to start with failing tests (lucky you, they are in this repo) and work to "fix" those tests.
* Work on one failing test at a time.
For these tests it is kind of automatic since they are totally independent classes/methods, but often the implementation of this concept is non-trivial.
* Once you "fix" a test, meaning that it passes, use this as a checkpoint of progress by performing a git commit.
	* The good part of this is that you can always refer back to a stable point in your code, even though it is incomplete.
* Keep ticking off the tests one at a time until they all pass.
![Dominoes falling](https://media2.giphy.com/media/HPA8CiJuvcVW0/source.gif)

## Submitting work
* `git add FILES` where FILES is either the dot character `.` (adds entire recursive directory tree) or a list of files added or changed.
* `git commit -m "DESCRIPTION OF WHAT IS IN THIS COMMIT"`
* `git push origin master`
* Verify green check mark next to commit indicating successful build and that tests pass