
/**
 * @param {string} jid 
 * @returns {boolean}
 */
const isGroup = (jid) => {
   const regexp = new RegExp(/^\d{18}@g.us$/)
   return regexp.test(jid)
}

/**
 * @param {import("../library/library").IWASock} sock 
 */
exports.chatBot = (sock) => {
    sock.ev.on('messages.upsert', async ({ messages, type }) => {
        const msg = messages[0]
        const jid = messages[0].key.remoteJid
      

        if (!isGroup(jid) && !msg.key.fromMe && jid !== 'status@broadcast') {
            sock.sendReadReceipt(jid, msg.key.participant, [msg.key.id])

            if (msg.message.conversation){
                console.log('Sending seen. 👀');
                await sock.sendReadReceipt(jid, msg.key.participant, [msg.key.id]);
                await sock.chatModify({ markRead: false, lastMessages: [msg] }, jid);

                }
        }  

})
}