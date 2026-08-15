#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Epic::OnlineServices {
class Extensions;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Extensions*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Extensions*, "Epic.OnlineServices", "Extensions");
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Method IsOperationComplete, addr 0x1804d6c80, size 0x80, virtual false, abstract: false, final false
static inline bool IsOperationComplete(::Epic::OnlineServices::Result  result) ;

/// @brief Method ToHexString, addr 0x1804d8b00, size 0x20, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* ToHexString(::System::ArraySegment_1<uint8_t>  arraySegment) ;

/// @brief Method ToHexString, addr 0x1804d8b20, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* ToHexString(::ArrayW<uint8_t>  byteArray) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Extensions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
