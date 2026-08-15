#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/InspectorValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InspectorValue_1)
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class InspectorValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::InspectorValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::InspectorValue_1, "Rewired.Utils.Classes.Data", "InspectorValue`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.InspectorValue`1<T>
class CORDL_TYPE InspectorValue_1 : public ::System::Object {
public:
// Declarations
/// @brief Field YcRWfTEbyWcKskPoANGrmQzobGvCb, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_YcRWfTEbyWcKskPoANGrmQzobGvCb, put=__cordl_internal_set_YcRWfTEbyWcKskPoANGrmQzobGvCb)) T  YcRWfTEbyWcKskPoANGrmQzobGvCb;

/// @brief Field ifMAfLHDwRsJtkIpeSVcQhYcmexrA, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ifMAfLHDwRsJtkIpeSVcQhYcmexrA, put=__cordl_internal_set_ifMAfLHDwRsJtkIpeSVcQhYcmexrA)) bool  ifMAfLHDwRsJtkIpeSVcQhYcmexrA;

 __declspec(property(get=get_isSet)) bool  isSet;

 __declspec(property(get=get_value, put=set_value)) T  value;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Rewired::Utils::Classes::Data::InspectorValue_1<T>* New_ctor() ;

/// @brief Method SetIfChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SetIfChanged(T  value) ;

constexpr T const& __cordl_internal_get_YcRWfTEbyWcKskPoANGrmQzobGvCb() const;

constexpr T& __cordl_internal_get_YcRWfTEbyWcKskPoANGrmQzobGvCb() ;

constexpr bool const& __cordl_internal_get_ifMAfLHDwRsJtkIpeSVcQhYcmexrA() const;

constexpr bool& __cordl_internal_get_ifMAfLHDwRsJtkIpeSVcQhYcmexrA() ;

constexpr void __cordl_internal_set_YcRWfTEbyWcKskPoANGrmQzobGvCb(T  value) ;

constexpr void __cordl_internal_set_ifMAfLHDwRsJtkIpeSVcQhYcmexrA(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_isSet() ;

/// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_value() ;

/// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_value(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InspectorValue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InspectorValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InspectorValue_1(InspectorValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InspectorValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InspectorValue_1(InspectorValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3061};

/// @brief Field YcRWfTEbyWcKskPoANGrmQzobGvCb, offset: 0x10, size: 0x8, def value: None
 T  ___YcRWfTEbyWcKskPoANGrmQzobGvCb;

/// @brief Field ifMAfLHDwRsJtkIpeSVcQhYcmexrA, offset: 0x18, size: 0x1, def value: None
 bool  ___ifMAfLHDwRsJtkIpeSVcQhYcmexrA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
