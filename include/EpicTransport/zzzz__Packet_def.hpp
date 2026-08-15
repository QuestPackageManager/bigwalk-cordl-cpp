#pragma once
// IWYU pragma private; include "EpicTransport/Packet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Packet)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace EpicTransport {
struct Packet;
}
// Write type traits
MARK_VAL_T(::EpicTransport::Packet);
DEFINE_IL2CPP_CLASS(::EpicTransport::Packet, "EpicTransport", "Packet");
// Dependencies 
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Packet
struct CORDL_TYPE Packet {
public:
// Declarations
 __declspec(property(get=get_size)) int32_t  size;

/// @brief Method FromBytes, addr 0x1815896d0, size 0x2d0, virtual false, abstract: false, final false
inline void FromBytes(::System::ArraySegment_1<uint8_t>  array) ;

/// @brief Method ToBytes, addr 0x1815899a0, size 0xd0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToBytes() ;

/// @brief Method get_size, addr 0x181589a70, size 0x100, virtual false, abstract: false, final false
inline int32_t get_size() ;

// Ctor Parameters []
// @brief default ctor
constexpr Packet() ;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fragment", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "moreFragments", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr Packet(int32_t  id, int32_t  fragment, bool  moreFragments, ::ArrayW<uint8_t>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field headerSize offset 0xffffffff size 0x4
static constexpr int32_t  headerSize{static_cast<int32_t>(0x9)};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 int32_t  id;

/// @brief Field fragment, offset: 0x4, size: 0x4, def value: None
 int32_t  fragment;

/// @brief Field moreFragments, offset: 0x8, size: 0x1, def value: None
 bool  moreFragments;

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Packet, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Packet, fragment) == 0x4, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Packet, moreFragments) == 0x8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Packet, data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Packet) == 0x18, "Size mismatch!");

} // namespace end def EpicTransport
