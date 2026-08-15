#pragma once
// IWYU pragma private; include "Steamworks/MMKVPMarshaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MMKVPMarshaller)
namespace Steamworks {
struct MatchMakingKeyValuePair_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class MMKVPMarshaller;
}
// Write type traits
MARK_REF_T(::Steamworks::MMKVPMarshaller*);
DEFINE_IL2CPP_CLASS(::Steamworks::MMKVPMarshaller*, "Steamworks", "MMKVPMarshaller");
// Dependencies System.IntPtr, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.MMKVPMarshaller
class CORDL_TYPE MMKVPMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Field m_pArrayEntries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pArrayEntries, put=__cordl_internal_set_m_pArrayEntries)) ::System::IntPtr  m_pArrayEntries;

/// @brief Field m_pNativeArray, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pNativeArray, put=__cordl_internal_set_m_pNativeArray)) ::System::IntPtr  m_pNativeArray;

/// @brief Method Finalize, addr 0x180552df0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Steamworks::MMKVPMarshaller* New_ctor(::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  filters) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pArrayEntries() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pArrayEntries() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pNativeArray() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pNativeArray() ;

constexpr void __cordl_internal_set_m_pArrayEntries(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_pNativeArray(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x180552e30, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  filters) ;

/// @brief Method op_Implicit, addr 0x180552f70, size 0xc0, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::Steamworks::MMKVPMarshaller*  that) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MMKVPMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MMKVPMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MMKVPMarshaller(MMKVPMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MMKVPMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MMKVPMarshaller(MMKVPMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16015};

/// @brief Field m_pNativeArray, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_pNativeArray;

/// @brief Field m_pArrayEntries, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_pArrayEntries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::MMKVPMarshaller, ___m_pNativeArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::MMKVPMarshaller, ___m_pArrayEntries) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MMKVPMarshaller) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
