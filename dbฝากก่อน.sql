-- 1
create table title
(
  title_id		int primary key,
  title			varchar(60) not null,
  description	varchar(400) not null,
  rating		varchar(4),
  category		varchar(20),
  release_date	date
);

-- 2
create table title
(
  title_id		int,
  title			varchar(60) not null,
  description	varchar(400) not null,
  rating		varchar(4),
  category		varchar(20),
  release_date	date,
  	primary key (title_id)
);

-- 3
create table title_copy
(
  copy_id int primary key,
  title_id int not null,
  status varchar(15) not null,
  	foreign key (title_id) references title(title_id)
  
  -- title_id int foreign key references title(title_id) on delete cascade,
);

-- 4
create table title_copy
(
  copy_id int,
  title_id int not null,
  status varchar(15) not null,
  	primary key (copy_id),
  	foreign key (title_id) references title(title_id)
);

-- 5
alter table title
add constraint title_un
	unique (title);

-- 6
alter table title
modify release_date date not null;

-- 7
 alter table title
 add constraint title_cat_fk
 	foreign key (category_id) -- here
 	references title_category(title_category_id);

-- 8
alter table title
drop primary key;

-- 9
select table_name, column_name, constraint_name
from information_schema.key_column_usage;

alter table title
drop index title_un;

-- 10
SET FOREIGN_KEY_CHECKS = 0;
DROP TABLE employees;
drop table jobs;
SET FOREIGN_KEY_CHECKS = 1;

-- 11
select table_name, column_name, constraint_name
from information_schema.key_column_usage;

alter table employees
drop foreign key employees_jobs_job_id;

alter table job_history
drop foreign key job_history_jobs_job_id;

drop table jobs;

-- 12
alter table locations
drop foreign key locations_countries_country_id;

drop table countries;

-- 13
alter table title_copy
drop foreign key title_copy_ibfk_1;

alter table title_copy
drop title_id;