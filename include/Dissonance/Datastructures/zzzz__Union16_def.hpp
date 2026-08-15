#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/Union16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Union16)
// Forward declare root types
namespace Dissonance::Datastructures {
struct Union16;
}
// Write type traits
MARK_VAL_T(::Dissonance::Datastructures::Union16);
DEFINE_IL2CPP_CLASS(::Dissonance::Datastructures::Union16, "Dissonance.Datastructures", "Union16");
// Dependencies 
namespace Dissonance::Datastructures {
// Is value type: true
// CS Name: Dissonance.Datastructures.Union16
struct CORDL_TYPE Union16 {
public:
// Declarations
 __declspec(property(get=get_LSB, put=set_LSB)) uint8_t  LSB;

 __declspec(property(get=get_MSB, put=set_MSB)) uint8_t  MSB;

 __declspec(property(get=get_UInt16, put=set_UInt16)) uint16_t  UInt16;

/// @brief Field _byte1, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get__byte1, put=__cordl_internal_set__byte1)) uint8_t  _byte1;

/// @brief Field _byte2, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get__byte2, put=__cordl_internal_set__byte2)) uint8_t  _byte2;

/// @brief Field _ushort, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get__ushort, put=__cordl_internal_set__ushort)) uint16_t  _ushort;

constexpr uint8_t const& __cordl_internal_get__byte1() const;

constexpr uint8_t& __cordl_internal_get__byte1() ;

constexpr uint8_t const& __cordl_internal_get__byte2() const;

constexpr uint8_t& __cordl_internal_get__byte2() ;

constexpr uint16_t const& __cordl_internal_get__ushort() const;

constexpr uint16_t& __cordl_internal_get__ushort() ;

constexpr void __cordl_internal_set__byte1(uint8_t  value) ;

constexpr void __cordl_internal_set__byte2(uint8_t  value) ;

constexpr void __cordl_internal_set__ushort(uint16_t  value) ;

/// @brief Method get_LSB, addr 0x1805ed6f0, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_LSB() ;

/// @brief Method get_MSB, addr 0x1805ed710, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_MSB() ;

/// @brief Method get_UInt16, addr 0x18052ca80, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_UInt16() ;

/// @brief Method set_LSB, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_LSB(uint8_t  value) ;

/// @brief Method set_MSB, addr 0x1805ed730, size 0x10, virtual false, abstract: false, final false
inline void set_MSB(uint8_t  value) ;

/// @brief Method set_UInt16, addr 0x18052caa0, size 0x10, virtual false, abstract: false, final false
inline void set_UInt16(uint16_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Union16() ;

// Ctor Parameters [CppParam { name: "_ushort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_byte1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_byte2", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Union16(uint16_t  _ushort, uint8_t  _byte1, uint8_t  _byte2) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____ushort_padding[0x0];
/// @brief Field _ushort, offset: 0x0, size: 0x2, def value: None
 uint16_t  ____ushort;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____ushort_padding_forAlignment[0x0];
/// @brief Field _ushort, offset: 0x0, size: 0x2, def value: None
 uint16_t  ____ushort_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____byte1_padding[0x0];
/// @brief Field _byte1, offset: 0x0, size: 0x1, def value: None
 uint8_t  ____byte1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____byte1_padding_forAlignment[0x0];
/// @brief Field _byte1, offset: 0x0, size: 0x1, def value: None
 uint8_t  ____byte1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ____byte2_padding[0x1];
/// @brief Field _byte2, offset: 0x1, size: 0x1, def value: None
 uint8_t  ____byte2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ____byte2_padding_forAlignment[0x1];
/// @brief Field _byte2, offset: 0x1, size: 0x1, def value: None
 uint8_t  ____byte2_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Datastructures::Union16) == 0x2, "Size mismatch!");

} // namespace end def Dissonance::Datastructures
