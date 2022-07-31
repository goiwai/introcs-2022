# Performance Evaluation of Introduction to Computational Science 2022

Create the programs to submit a DAG job into the KEKCC using the _Job Array_ feature of LSF.

- Based on the [`B5-array-job.sh`](../job-and-task/lsf/geant4/B5-array-job.sh) and [`add-histograms-100.C`](../job-and-task/lsf/geant4/add-histograms-100.C), students may create a DAG job like:
  - Build the B5 application as an initialisation job
  - _Job Array_ consists of 100 elements of B5 applications
  - Each element of the _Job Array_ generates 1,000 events
  - Pileup the ROOT objects of 100,000 events job results in total as a finalisation job
- **Grants +1** for modifying and submitting existing your own programs instead of Geant4 Basic Example 5 (B5) above.

Fork the repository first: Go to <https://github.com/goiwai/introcs-2022/fork>, uncheck the "Copy the `master` branch only", then click the button "Create fork".

Secondly, clone it to your local system, then work on the specific branch named in the student ID, e.g., 20211234.

All the materials must be stored under the directory [`report`](../report/). **Grants +1** each if `Makefile` or `CMakeLists.txt` is provided.

## Report

The report must be written in English with 11 points or larger fonts, up to four pages of A4 paper. Any file format is acceptable but **+1 is granted** if the report is created in LaTeX.

The report should describe how/what you have achieved in the assignment above.

The report must include either one of the OOP keywords, such as _Object and Class_, _Encapsulation_, _Inheritance_, or _Polymorphism_. **Earn +1** if it includes all.

Also, the report may contain a special effort for something worthwhile. **Earn +1** if it is valuable.

## Submission Procedure

Once you are ready to submit the report to be reviewed, create a Pull Request (PR), the due is: **Wednesday, August 31st, 2022, End of Day, Anywhere on Earth (AoE)**.

The source of PR is the specific branch named in the student ID, e.g., 20211234. The destination branch must be the same name as the source branch.

## Evaluation Policy

1. No PR before due, no grade.
2. Course grade will be granted either one of A if the report took +3 or more extra points. +2, +1, goes B, C respectively, and 0 for D.
