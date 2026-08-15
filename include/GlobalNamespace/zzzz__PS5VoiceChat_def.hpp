#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5VoiceChat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PS5VoiceChat)
// Forward declare root types
namespace GlobalNamespace {
class PS5VoiceChat;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PS5VoiceChat*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PS5VoiceChat*, "", "PS5VoiceChat");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5VoiceChat
class CORDL_TYPE PS5VoiceChat : public ::System::Object {
public:
// Declarations
/// @brief Field <IsEnabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsEnabled_k__BackingField, put=setStaticF__IsEnabled_k__BackingField)) bool  _IsEnabled_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsInitialized_k__BackingField, put=setStaticF__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <LastError>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LastError_k__BackingField, put=setStaticF__LastError_k__BackingField)) int32_t  _LastError_k__BackingField;

/// @brief Method DisableVoiceChat, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool DisableVoiceChat() ;

/// @brief Method EnableVoiceChat, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool EnableVoiceChat() ;

/// @brief Method Initialize, addr 0x181accf50, size 0x20, virtual false, abstract: false, final false
static inline bool Initialize() ;

/// @brief Method Terminate, addr 0x181accf70, size 0x30, virtual false, abstract: false, final false
static inline void Terminate() ;

static inline bool getStaticF__IsEnabled_k__BackingField() ;

static inline bool getStaticF__IsInitialized_k__BackingField() ;

static inline int32_t getStaticF__LastError_k__BackingField() ;

/// @brief Method get_IsEnabled, addr 0x181accfa0, size 0x20, virtual false, abstract: false, final false
static inline bool get_IsEnabled() ;

/// @brief Method get_IsInitialized, addr 0x181accfc0, size 0x20, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

/// @brief Method get_IsVoiceChatInUse, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsVoiceChatInUse() ;

/// @brief Method get_LastError, addr 0x181accfe0, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_LastError() ;

static inline void setStaticF__IsEnabled_k__BackingField(bool  value) ;

static inline void setStaticF__IsInitialized_k__BackingField(bool  value) ;

static inline void setStaticF__LastError_k__BackingField(int32_t  value) ;

/// @brief Method set_IsEnabled, addr 0x181acd000, size 0x20, virtual false, abstract: false, final false
static inline void set_IsEnabled(bool  value) ;

/// @brief Method set_IsInitialized, addr 0x181acd020, size 0x20, virtual false, abstract: false, final false
static inline void set_IsInitialized(bool  value) ;

/// @brief Method set_LastError, addr 0x181acd040, size 0x20, virtual false, abstract: false, final false
static inline void set_LastError(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PS5VoiceChat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PS5VoiceChat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5VoiceChat(PS5VoiceChat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5VoiceChat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5VoiceChat(PS5VoiceChat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21045};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PS5VoiceChat) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
