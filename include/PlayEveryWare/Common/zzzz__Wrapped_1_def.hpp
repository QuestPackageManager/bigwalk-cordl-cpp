#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Wrapped_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Wrapped_1)
// Forward declare root types
namespace PlayEveryWare::Common {
template<typename T>
class Wrapped_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::Common::Wrapped_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::Common::Wrapped_1, "PlayEveryWare.Common", "Wrapped`1");
// Dependencies System.Object
namespace PlayEveryWare::Common {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.Common.Wrapped`1<T>
class CORDL_TYPE Wrapped_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) T  _value;

static inline ::PlayEveryWare::Common::Wrapped_1<T>* New_ctor() ;

/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Unwrap() ;

constexpr T const& __cordl_internal_get__value() const;

constexpr T& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Wrapped_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Wrapped_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Wrapped_1(Wrapped_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Wrapped_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Wrapped_1(Wrapped_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18798};

/// @brief Field _value, offset: 0x10, size: 0x8, def value: None
 T  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::Common
