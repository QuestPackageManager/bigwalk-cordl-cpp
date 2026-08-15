#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemotePlayerDebugConstants)
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugConstants;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::RemotePlayerDebugConstants*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::RemotePlayerDebugConstants*, "Shipmates.RemotePlayerDebug", "RemotePlayerDebugConstants");
// Dependencies System.Guid, System.Object
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemotePlayerDebugConstants
class CORDL_TYPE RemotePlayerDebugConstants : public ::System::Object {
public:
// Declarations
/// @brief Field RequestEditorToPlayer, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_RequestEditorToPlayer, put=setStaticF_RequestEditorToPlayer)) ::System::Guid  RequestEditorToPlayer;

/// @brief Field ResponsePlayerToEditor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ResponsePlayerToEditor, put=setStaticF_ResponsePlayerToEditor)) ::System::Guid  ResponsePlayerToEditor;

static inline ::System::Guid getStaticF_RequestEditorToPlayer() ;

static inline ::System::Guid getStaticF_ResponsePlayerToEditor() ;

static inline void setStaticF_RequestEditorToPlayer(::System::Guid  value) ;

static inline void setStaticF_ResponsePlayerToEditor(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerDebugConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotePlayerDebugConstants(RemotePlayerDebugConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotePlayerDebugConstants(RemotePlayerDebugConstants const& ) = delete;

/// @brief Field LogPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  LogPrefix{u"[RemotePlayerDebug] "};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::RemotePlayerDebugConstants) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
