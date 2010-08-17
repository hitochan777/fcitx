#include "table.h"

CONFIG_BINDING_BEGIN(TABLE);
CONFIG_BINDING_REGISTER("CodeTable", "Name", strName);
CONFIG_BINDING_REGISTER("CodeTable", "IconName", strIconName);
CONFIG_BINDING_REGISTER("CodeTable", "File", strPath);
CONFIG_BINDING_REGISTER("CodeTable", "AdjustOrder", tableOrder);
CONFIG_BINDING_REGISTER("CodeTable", "Priority", iPriority);
CONFIG_BINDING_REGISTER("CodeTable", "UsePY", bUsePY);
CONFIG_BINDING_REGISTER("CodeTable", "PYKey", cPinyin);
CONFIG_BINDING_REGISTER("CodeTable", "AutoSend", iTableAutoSendToClient);
CONFIG_BINDING_REGISTER("CodeTable", "NoneMatchAutoSend", iTableAutoSendToClientWhenNone);
CONFIG_BINDING_REGISTER("CodeTable", "EndKey", strEndCode);
CONFIG_BINDING_REGISTER("CodeTable", "UseMatchingKey", bUseMatchingKey);
CONFIG_BINDING_REGISTER("CodeTable", "MatchingKey", cMatchingKey);
CONFIG_BINDING_REGISTER("CodeTable", "ExactMatch", bTableExactMatch);
CONFIG_BINDING_REGISTER("CodeTable", "AutoPhrase", bAutoPhrase);
CONFIG_BINDING_REGISTER("CodeTable", "AutoPhraseLength", iAutoPhrase);
CONFIG_BINDING_REGISTER("CodeTable", "AutoPhrasePhrase", bAutoPhrasePhrase);
CONFIG_BINDING_REGISTER("CodeTable", "SaveAutoPhrase", iSaveAutoPhraseAfter);
CONFIG_BINDING_REGISTER("CodeTable", "PromptTableCode", bPromptTableCode);
CONFIG_BINDING_REGISTER("CodeTable", "Symbol", strSymbol);
CONFIG_BINDING_REGISTER("CodeTable", "SymbolFile", strSymbolFile);
CONFIG_BINDING_REGISTER("CodeTable", "Choose", strChoose);
CONFIG_BINDING_REGISTER("CodeTable", "Enabled", bEnabled);
CONFIG_BINDING_END()

