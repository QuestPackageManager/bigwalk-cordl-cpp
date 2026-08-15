#pragma once
// IWYU pragma private; include "Rewired/Utils/BitTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BitTools)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Utils {
class BitTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::BitTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::BitTools*, "Rewired.Utils", "BitTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.BitTools
class CORDL_TYPE BitTools : public ::System::Object {
public:
// Declarations
/// @brief Field EdAXgSiLOYBLkxlmYBTBxlllXrUK, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EdAXgSiLOYBLkxlmYBTBxlllXrUK, put=setStaticF_EdAXgSiLOYBLkxlmYBTBxlllXrUK)) ::ArrayW<uint8_t>  EdAXgSiLOYBLkxlmYBTBxlllXrUK;

/// @brief Method GetBytes, addr 0x181902430, size 0x50, virtual false, abstract: false, final false
static inline void GetBytes(int16_t  value, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method GetBytes, addr 0x1819023d0, size 0x60, virtual false, abstract: false, final false
static inline void GetBytes(int32_t  value, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method GetBytes, addr 0x181902350, size 0x80, virtual false, abstract: false, final false
static inline void GetBytes(int64_t  value, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method IntToFloat, addr 0x181902480, size 0x180, virtual false, abstract: false, final false
static inline float_t IntToFloat(::System::IntPtr  pointer, int32_t  offset) ;

static inline ::ArrayW<uint8_t> getStaticF_EdAXgSiLOYBLkxlmYBTBxlllXrUK() ;

/// @brief Method rKWumMeIgJGrbHowbgbYHZDUSrQgb, addr 0x181902600, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> rKWumMeIgJGrbHowbgbYHZDUSrQgb() ;

static inline void setStaticF_EdAXgSiLOYBLkxlmYBTBxlllXrUK(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitTools(BitTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitTools(BitTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::BitTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
