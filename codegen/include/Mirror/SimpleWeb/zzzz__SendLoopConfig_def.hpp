#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SendLoopConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SendLoopConfig)
// Forward declare root types
namespace Mirror::SimpleWeb {
class SendLoopConfig;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SendLoopConfig*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SendLoopConfig*, "Mirror.SimpleWeb", "SendLoopConfig");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SendLoopConfig
class CORDL_TYPE SendLoopConfig : public ::System::Object {
public:
// Declarations
/// @brief Field batchSend, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_batchSend, put=setStaticF_batchSend)) bool  batchSend;

/// @brief Field sleepBeforeSend, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_sleepBeforeSend, put=setStaticF_sleepBeforeSend)) bool  sleepBeforeSend;

static inline bool getStaticF_batchSend() ;

static inline bool getStaticF_sleepBeforeSend() ;

static inline void setStaticF_batchSend(bool  value) ;

static inline void setStaticF_sleepBeforeSend(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendLoopConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendLoopConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SendLoopConfig(SendLoopConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendLoopConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendLoopConfig(SendLoopConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20535};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::SendLoopConfig) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
