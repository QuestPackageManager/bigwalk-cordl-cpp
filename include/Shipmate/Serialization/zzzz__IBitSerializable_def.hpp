#pragma once
// IWYU pragma private; include "Shipmate/Serialization/IBitSerializable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBitSerializable)
// Forward declare root types
namespace Shipmate::Serialization {
class IBitSerializable;
}
// Write type traits
MARK_REF_T(::Shipmate::Serialization::IBitSerializable*);
DEFINE_IL2CPP_CLASS(::Shipmate::Serialization::IBitSerializable*, "Shipmate.Serialization", "IBitSerializable");
// Dependencies 
namespace Shipmate::Serialization {
// Is value type: false
// CS Name: Shipmate.Serialization.IBitSerializable
class CORDL_TYPE IBitSerializable {
public:
// Declarations
/// @brief Method Deserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Deserialize(::ArrayW<uint8_t>  aData, ::by_ref<int32_t>  aReadPos) ;

/// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Serialize(::ArrayW<uint8_t>  aData, ::by_ref<int32_t>  aWritePos) ;

// Ctor Parameters [CppParam { name: "", ty: "IBitSerializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBitSerializable(IBitSerializable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmate::Serialization
