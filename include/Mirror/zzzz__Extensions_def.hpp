#pragma once
// IWYU pragma private; include "Mirror/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace Mirror {
class Extensions;
}
// Write type traits
MARK_REF_T(::Mirror::Extensions*);
DEFINE_IL2CPP_CLASS(::Mirror::Extensions*, "Mirror", "Extensions");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyTo(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Collections::Generic::List_1<T>*  destination) ;

/// @brief Method GetMethodName, addr 0x181590c00, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetMethodName(::System::Delegate*  func) ;

/// @brief Method GetStableHashCode, addr 0x181590c40, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetStableHashCode(::StringW  text) ;

/// @brief Method ToHexString, addr 0x181590ca0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToHexString(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryDequeue(::System::Collections::Generic::Queue_1<T>*  source, ::by_ref<T>  element) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Extensions) == 0x10, "Size mismatch!");

} // namespace end def Mirror
