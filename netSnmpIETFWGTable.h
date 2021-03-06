/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 */
#ifndef NETSNMPIETFWGTABLE_H
#define NETSNMPIETFWGTABLE_H

/*
 * function declarations 
 */
netsnmp_tdata * init_netSnmpIETFWGTable(void);
netsnmp_tdata * initialize_table_netSnmpIETFWGTable(void);
Netsnmp_Node_Handler netSnmpIETFWGTable_handler;

/*
 * Simple helpers for external use
 */
void netSnmpIETFWGTable_simple_addupdate(netsnmp_tdata *table_data,
	const char *wgname,
	const char *wgchair1, const char *wgchair2);
void netSnmpIETFWGTable_simple_remove(netsnmp_tdata *table_data, const char *wgname);


/*
 * column number definitions for table netSnmpIETFWGTable 
 */
#define COLUMN_NSIETFWGNAME		1
#define COLUMN_NSIETFWGCHAIR1		2
#define COLUMN_NSIETFWGCHAIR2		3
#endif                          /* NETSNMPIETFWGTABLE_H */
