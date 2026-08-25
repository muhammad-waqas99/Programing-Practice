interface Task {
    readonly id: number;
    title: string;
    description: string;
    priority: "low" | "medium" | "high";
    completed: boolean;
    tags: string[];
    dueDate?: string;
}



const tasks: Task[] = [
    {
        id: 1,
        title: "Learn TypeScript",
        description: "Study TypeScript fundamentals",
        priority: "high",
        completed: false,
        tags: ["typescript", "learning"],
        dueDate: "2026-08-25"
    },
    {
        id: 2,
        title: "Practice TypeScript",
        description: "Practice interfaces and utility types",
        priority: "medium",
        completed: false,
        tags: ["typescript", "practice"]
    },
    {
        id: 3,
        title: "Build a Small Project",
        description: "Create a small project using TypeScript",
        priority: "low",
        completed: false,
        tags: ["typescript", "project"],
        dueDate: "2026-08-30"
    }
];




function printTask(task: Task): void {
    const status = task.completed ? "Completed" : "Incomplete";

    if (task.dueDate !== undefined) {
        console.log(`
Task: ${task.title}
Priority: ${task.priority}
Status: ${status}
Tags: ${task.tags.join(", ")}
Due: ${task.dueDate}
`);
    } else {
        console.log(`
Task: ${task.title}
Priority: ${task.priority}
Status: ${status}
Tags: ${task.tags.join(", ")}
Due: No deadline
`);
    }
}

printTask(tasks[0]!);



type TaskUpdate = Partial<Task>;

const updateTask: TaskUpdate = {
    completed: true
};



function updateTaskById(id: number, update: TaskUpdate): void {
    const task = tasks.find(task => task.id === id);

    if (task === undefined) {
        console.log("Task not found");
        return;
    }

    if (update.completed !== undefined) {
        task.completed = update.completed;
    }

    if (update.title !== undefined) {
        task.title = update.title;
    }

    if (update.priority !== undefined) {
        task.priority = update.priority;
    }

    if (update.description !== undefined) {
        task.description = update.description;
    }

    if (update.tags !== undefined) {
        task.tags = update.tags;
    }

    if (update.dueDate !== undefined) {
        task.dueDate = update.dueDate;
    }

    console.log(`Task "${task.title}" updated successfully.`);
}

updateTaskById(1, updateTask);

printTask(tasks[0]!);



type TaskSummary = Pick<Task, "title" | "priority" | "completed">;

const taskSummary: TaskSummary = {
    title: tasks[0]!.title,
    priority: tasks[0]!.priority,
    completed: tasks[0]!.completed
};

console.log("Task Summary:");
console.log(taskSummary);




type TaskApi = Omit<Task, "id">;
const task = tasks[0]!;

const taskForApi: TaskApi = {
    title: task.title,
    description: task.description,
    priority: task.priority,
    completed: task.completed,
    tags: task.tags,
    dueDate: task.dueDate!
};

console.log("Task for API:");
console.log(taskForApi);



type TaskStatus = [title: string, completed: boolean];




const taskStatuses: TaskStatus[] = tasks.map(
    (task): TaskStatus => [
        task.title,
        task.completed
    ]
);



function printTaskStatuses(statuses: TaskStatus[]): void {
    for (const [title, completed] of statuses) {
        const status = completed ? "Completed" : "Incomplete";

        console.log(`${title} → ${status}`);
    }
}

printTaskStatuses(taskStatuses);