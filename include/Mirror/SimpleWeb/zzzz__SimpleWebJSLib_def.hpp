#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebJSLib.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleWebJSLib)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class SimpleWebJSLib;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SimpleWebJSLib*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SimpleWebJSLib*, "Mirror.SimpleWeb", "SimpleWebJSLib");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SimpleWebJSLib
class CORDL_TYPE SimpleWebJSLib : public ::System::Object {
public:
// Declarations
/// @brief Method Connect, addr 0x1802eb7d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Connect(::StringW  address, ::System::Action_1<int32_t>*  openCallback, ::System::Action_1<int32_t>*  closeCallBack, ::System::Action_3<int32_t,::System::IntPtr,int32_t>*  messageCallback, ::System::Action_1<int32_t>*  errorCallback) ;

/// @brief Method Disconnect, addr 0x1802eb7d0, size 0x10, virtual false, abstract: false, final false
static inline void Disconnect(int32_t  index) ;

/// @brief Method IsConnected, addr 0x1802eb7d0, size 0x10, virtual false, abstract: false, final false
static inline bool IsConnected(int32_t  index) ;

/// @brief Method Send, addr 0x1802eb7d0, size 0x10, virtual false, abstract: false, final false
static inline bool Send(int32_t  index, ::ArrayW<uint8_t>  array, int32_t  offset, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebJSLib() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebJSLib", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleWebJSLib(SimpleWebJSLib && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebJSLib", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleWebJSLib(SimpleWebJSLib const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::SimpleWebJSLib) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
