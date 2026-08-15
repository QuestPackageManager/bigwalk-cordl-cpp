#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/NativeArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayExtensions)
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class NativeArrayExtensions;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::NativeArrayExtensions*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::NativeArrayExtensions*, "JBooth.MicroVerseCore", "NativeArrayExtensions");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.NativeArrayExtensions
class CORDL_TYPE NativeArrayExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method CopyToFast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyToFast(::Unity::Collections::NativeArray_1<T>  nativeArray, ::System::Object*  array) ;

/// @brief Method CopyToFastByteToInt, addr 0x18141d050, size 0x1a0, virtual false, abstract: false, final false
static inline void CopyToFastByteToInt(::Unity::Collections::NativeArray_1<uint8_t>  nativeArray, ::System::Object*  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeArrayExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeArrayExtensions(NativeArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeArrayExtensions(NativeArrayExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17976};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::NativeArrayExtensions) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
