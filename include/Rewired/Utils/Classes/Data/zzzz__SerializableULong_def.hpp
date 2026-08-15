#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/SerializableULong.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableULong)
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class SerializableULong;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::SerializableULong*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializableULong*, "Rewired.Utils.Classes.Data", "SerializableULong");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializableULong
class CORDL_TYPE SerializableULong : public ::System::Object {
public:
// Declarations
/// @brief Field ulong_32BitHigh, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ulong_32BitHigh, put=__cordl_internal_set_ulong_32BitHigh)) int32_t  ulong_32BitHigh;

/// @brief Field ulong_32BitLow, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ulong_32BitLow, put=__cordl_internal_set_ulong_32BitLow)) int32_t  ulong_32BitLow;

 __declspec(property(get=get_value, put=set_value)) uint64_t  value;

/// @brief Method Clone, addr 0x181957e70, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializableULong* Clone() ;

/// @brief Method EyObLVBciwarvWIquPuJHmpivUrC, addr 0x181957ea0, size 0x10, virtual false, abstract: false, final false
inline uint64_t EyObLVBciwarvWIquPuJHmpivUrC(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::SerializableULong* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::SerializableULong* New_ctor(::Rewired::Utils::Classes::Data::SerializableULong*  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_ulong_32BitHigh() const;

constexpr int32_t& __cordl_internal_get_ulong_32BitHigh() ;

constexpr int32_t const& __cordl_internal_get_ulong_32BitLow() const;

constexpr int32_t& __cordl_internal_get_ulong_32BitLow() ;

constexpr void __cordl_internal_set_ulong_32BitHigh(int32_t  value) ;

constexpr void __cordl_internal_set_ulong_32BitLow(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181957eb0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::SerializableULong*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_value, addr 0x181957ed0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_value() ;

/// @brief Method set_value, addr 0x1804a0260, size 0x10, virtual false, abstract: false, final false
inline void set_value(uint64_t  value) ;

/// @brief Method unEYVcTqpYGINnpMwZKxgCNTbIEf, addr 0x181957ee0, size 0x10, virtual false, abstract: false, final false
inline void unEYVcTqpYGINnpMwZKxgCNTbIEf(uint64_t  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableULong() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableULong", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableULong(SerializableULong && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableULong", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableULong(SerializableULong const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3045};

/// @brief Field ulong_32BitLow, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ulong_32BitLow;

/// @brief Field ulong_32BitHigh, offset: 0x14, size: 0x4, def value: None
 int32_t  ___ulong_32BitHigh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializableULong, ___ulong_32BitLow) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializableULong, ___ulong_32BitHigh) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializableULong) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
