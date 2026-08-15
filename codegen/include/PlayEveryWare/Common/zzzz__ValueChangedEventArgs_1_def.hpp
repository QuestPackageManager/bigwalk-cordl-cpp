#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/ValueChangedEventArgs_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ValueChangedEventArgs_1)
// Forward declare root types
namespace PlayEveryWare::Common {
template<typename TValueType>
class ValueChangedEventArgs_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::Common::ValueChangedEventArgs_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::Common::ValueChangedEventArgs_1, "PlayEveryWare.Common", "ValueChangedEventArgs`1");
// Dependencies System.EventArgs
namespace PlayEveryWare::Common {
// cpp template
template<typename TValueType>
// Is value type: false
// CS Name: PlayEveryWare.Common.ValueChangedEventArgs`1<TValueType>
class CORDL_TYPE ValueChangedEventArgs_1 : public ::System::EventArgs {
public:
// Declarations
/// @brief Field NewValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewValue, put=__cordl_internal_set_NewValue)) TValueType  NewValue;

/// @brief Field OldValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OldValue, put=__cordl_internal_set_OldValue)) TValueType  OldValue;

static inline ::PlayEveryWare::Common::ValueChangedEventArgs_1<TValueType>* New_ctor(TValueType  oldValue, TValueType  newValue) ;

constexpr TValueType const& __cordl_internal_get_NewValue() const;

constexpr TValueType& __cordl_internal_get_NewValue() ;

constexpr TValueType const& __cordl_internal_get_OldValue() const;

constexpr TValueType& __cordl_internal_get_OldValue() ;

constexpr void __cordl_internal_set_NewValue(TValueType  value) ;

constexpr void __cordl_internal_set_OldValue(TValueType  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TValueType  oldValue, TValueType  newValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueChangedEventArgs_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedEventArgs_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueChangedEventArgs_1(ValueChangedEventArgs_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedEventArgs_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueChangedEventArgs_1(ValueChangedEventArgs_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18797};

/// @brief Field OldValue, offset: 0x10, size: 0x8, def value: None
 TValueType  ___OldValue;

/// @brief Field NewValue, offset: 0x18, size: 0x8, def value: None
 TValueType  ___NewValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::Common
