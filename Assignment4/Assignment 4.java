public class Student {

    private int id;
    private String name;
    private String grade;
    Student[] students = new Student[100];
    int cnt = 0;

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String getGrade() {
        return grade;
    }

    public void setId(int s) {
        id = s;
    }

    public void setName(String s) {
        name = s;
    }

    public void setGrade(String s) {
        grade = s;
    }

    Student(int id, String name, String grade) {
        this.id = id;
        this.name = name;
        this.grade = grade;
    }

    public void insert(int id, String name, String grade) {
        students[cnt] = new Student(id, name, grade);
        cnt++;
    }

    public void delete(int id) {
        for (int i = 0; i < cnt; i++) {
            if (students[i].getId() == id) {
                for (int j = i; j < cnt - 1; j++) {
                    students[j] = students[j + 1];
                }
                students[cnt - 1] = null;
                cnt--;
            }
        }
    }

    public String Info(int id) {
        for (int i = 0; i < cnt; i++) {
            if (id != students[i].getId()) {
                return "NA, NA";
            }
        }
        return name + ", " + grade;
    }
}