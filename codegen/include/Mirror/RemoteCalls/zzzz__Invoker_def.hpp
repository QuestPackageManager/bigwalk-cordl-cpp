#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/Invoker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/RemoteCalls/zzzz__RemoteCallType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Invoker)
namespace Mirror::RemoteCalls {
class RemoteCallDelegate;
}
namespace Mirror::RemoteCalls {
struct RemoteCallType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Mirror::RemoteCalls {
class Invoker;
}
// Write type traits
MARK_REF_T(::Mirror::RemoteCalls::Invoker*);
DEFINE_IL2CPP_CLASS(::Mirror::RemoteCalls::Invoker*, "Mirror.RemoteCalls", "Invoker");
// Dependencies Mirror.RemoteCalls.RemoteCallType, System.Object
namespace Mirror::RemoteCalls {
// Is value type: false
// CS Name: Mirror.RemoteCalls.Invoker
class CORDL_TYPE Invoker : public ::System::Object {
public:
// Declarations
/// @brief Field callType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_callType, put=__cordl_internal_set_callType)) ::Mirror::RemoteCalls::RemoteCallType  callType;

/// @brief Field cmdRequiresAuthority, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_cmdRequiresAuthority, put=__cordl_internal_set_cmdRequiresAuthority)) bool  cmdRequiresAuthority;

/// @brief Field componentType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentType, put=__cordl_internal_set_componentType)) ::System::Type*  componentType;

/// @brief Field function, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_function, put=__cordl_internal_set_function)) ::Mirror::RemoteCalls::RemoteCallDelegate*  function;

/// @brief Method AreEqual, addr 0x181594480, size 0x60, virtual false, abstract: false, final false
inline bool AreEqual(::System::Type*  componentType, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*  invokeFunction) ;

static inline ::Mirror::RemoteCalls::Invoker* New_ctor() ;

constexpr ::Mirror::RemoteCalls::RemoteCallType const& __cordl_internal_get_callType() const;

constexpr ::Mirror::RemoteCalls::RemoteCallType& __cordl_internal_get_callType() ;

constexpr bool const& __cordl_internal_get_cmdRequiresAuthority() const;

constexpr bool& __cordl_internal_get_cmdRequiresAuthority() ;

constexpr ::System::Type* const& __cordl_internal_get_componentType() const;

constexpr ::System::Type*& __cordl_internal_get_componentType() ;

constexpr ::Mirror::RemoteCalls::RemoteCallDelegate* const& __cordl_internal_get_function() const;

constexpr ::Mirror::RemoteCalls::RemoteCallDelegate*& __cordl_internal_get_function() ;

constexpr void __cordl_internal_set_callType(::Mirror::RemoteCalls::RemoteCallType  value) ;

constexpr void __cordl_internal_set_cmdRequiresAuthority(bool  value) ;

constexpr void __cordl_internal_set_componentType(::System::Type*  value) ;

constexpr void __cordl_internal_set_function(::Mirror::RemoteCalls::RemoteCallDelegate*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Invoker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Invoker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Invoker(Invoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Invoker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Invoker(Invoker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18394};

/// @brief Field componentType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___componentType;

/// @brief Field callType, offset: 0x18, size: 0x4, def value: None
 ::Mirror::RemoteCalls::RemoteCallType  ___callType;

/// @brief Field function, offset: 0x20, size: 0x8, def value: None
 ::Mirror::RemoteCalls::RemoteCallDelegate*  ___function;

/// @brief Field cmdRequiresAuthority, offset: 0x28, size: 0x1, def value: None
 bool  ___cmdRequiresAuthority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::RemoteCalls::Invoker, ___componentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteCalls::Invoker, ___callType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteCalls::Invoker, ___function) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteCalls::Invoker, ___cmdRequiresAuthority) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::RemoteCalls::Invoker) == 0x30, "Size mismatch!");

} // namespace end def Mirror::RemoteCalls
