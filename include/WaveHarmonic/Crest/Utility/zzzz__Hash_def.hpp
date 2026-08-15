#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/Hash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Hash)
namespace System {
class Object;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
class Hash;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Utility::Hash*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Utility::Hash*, "WaveHarmonic.Crest.Utility", "Hash");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.Hash
class CORDL_TYPE Hash : public ::System::Object {
public:
// Declarations
/// @brief Method AddBool, addr 0x182567910, size 0x20, virtual false, abstract: false, final false
static inline void AddBool(bool  value, ::by_ref<int32_t>  hash) ;

/// @brief Method AddFloat, addr 0x182567930, size 0x30, virtual false, abstract: false, final false
static inline void AddFloat(float_t  value, ::by_ref<int32_t>  hash) ;

/// @brief Method AddInt, addr 0x182567960, size 0x10, virtual false, abstract: false, final false
static inline void AddInt(int32_t  value, ::by_ref<int32_t>  hash) ;

/// @brief Method AddObject, addr 0x182567970, size 0x40, virtual false, abstract: false, final false
static inline void AddObject(::System::Object*  value, ::by_ref<int32_t>  hash) ;

/// @brief Method AddObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AddObject(T  value, ::by_ref<int32_t>  hash) ;

/// @brief Method CreateHash, addr 0x1825679b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t CreateHash() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Hash(Hash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hash(Hash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Utility::Hash) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Utility
