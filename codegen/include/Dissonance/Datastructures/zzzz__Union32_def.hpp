#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/Union32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Union32)
// Forward declare root types
namespace Dissonance::Datastructures {
struct Union32;
}
// Write type traits
MARK_VAL_T(::Dissonance::Datastructures::Union32);
DEFINE_IL2CPP_CLASS(::Dissonance::Datastructures::Union32, "Dissonance.Datastructures", "Union32");
// Dependencies 
namespace Dissonance::Datastructures {
// Is value type: true
// CS Name: Dissonance.Datastructures.Union32
struct CORDL_TYPE Union32 {
public:
// Declarations
 __declspec(property(get=get_UInt32, put=set_UInt32)) uint32_t  UInt32;

/// @brief Field _byte1, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get__byte1, put=__cordl_internal_set__byte1)) uint8_t  _byte1;

/// @brief Field _byte2, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get__byte2, put=__cordl_internal_set__byte2)) uint8_t  _byte2;

/// @brief Field _byte3, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get__byte3, put=__cordl_internal_set__byte3)) uint8_t  _byte3;

/// @brief Field _byte4, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get__byte4, put=__cordl_internal_set__byte4)) uint8_t  _byte4;

/// @brief Field _uint, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__uint, put=__cordl_internal_set__uint)) uint32_t  _uint;

/// @brief Method GetBytesInNetworkOrder, addr 0x1805ed740, size 0x40, virtual false, abstract: false, final false
inline void GetBytesInNetworkOrder(::by_ref<uint8_t>  b1, ::by_ref<uint8_t>  b2, ::by_ref<uint8_t>  b3, ::by_ref<uint8_t>  b4) ;

/// @brief Method SetBytesFromNetworkOrder, addr 0x1805ed780, size 0x30, virtual false, abstract: false, final false
inline void SetBytesFromNetworkOrder(uint8_t  b1, uint8_t  b2, uint8_t  b3, uint8_t  b4) ;

constexpr uint8_t const& __cordl_internal_get__byte1() const;

constexpr uint8_t& __cordl_internal_get__byte1() ;

constexpr uint8_t const& __cordl_internal_get__byte2() const;

constexpr uint8_t& __cordl_internal_get__byte2() ;

constexpr uint8_t const& __cordl_internal_get__byte3() const;

constexpr uint8_t& __cordl_internal_get__byte3() ;

constexpr uint8_t const& __cordl_internal_get__byte4() const;

constexpr uint8_t& __cordl_internal_get__byte4() ;

constexpr uint32_t const& __cordl_internal_get__uint() const;

constexpr uint32_t& __cordl_internal_get__uint() ;

constexpr void __cordl_internal_set__byte1(uint8_t  value) ;

constexpr void __cordl_internal_set__byte2(uint8_t  value) ;

constexpr void __cordl_internal_set__byte3(uint8_t  value) ;

constexpr void __cordl_internal_set__byte4(uint8_t  value) ;

constexpr void __cordl_internal_set__uint(uint32_t  value) ;

/// @brief Method get_UInt32, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_UInt32() ;

/// @brief Method set_UInt32, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_UInt32(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Union32() ;

// Ctor Parameters [CppParam { name: "_uint", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_byte1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_byte2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_byte3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_byte4", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Union32(uint32_t  _uint, uint8_t  _byte1, uint8_t  _byte2, uint8_t  _byte3, uint8_t  _byte4) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____uint_padding[0x0];
/// @brief Field _uint, offset: 0x0, size: 0x4, def value: None
 uint32_t  ____uint;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____uint_padding_forAlignment[0x0];
/// @brief Field _uint, offset: 0x0, size: 0x4, def value: None
 uint32_t  ____uint_forAlignment;
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
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ____byte3_padding[0x2];
/// @brief Field _byte3, offset: 0x2, size: 0x1, def value: None
 uint8_t  ____byte3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ____byte3_padding_forAlignment[0x2];
/// @brief Field _byte3, offset: 0x2, size: 0x1, def value: None
 uint8_t  ____byte3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ____byte4_padding[0x3];
/// @brief Field _byte4, offset: 0x3, size: 0x1, def value: None
 uint8_t  ____byte4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ____byte4_padding_forAlignment[0x3];
/// @brief Field _byte4, offset: 0x3, size: 0x1, def value: None
 uint8_t  ____byte4_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Datastructures::Union32) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Datastructures
