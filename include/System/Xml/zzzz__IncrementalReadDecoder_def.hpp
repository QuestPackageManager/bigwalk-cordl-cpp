#pragma once
// IWYU pragma private; include "System/Xml/IncrementalReadDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementalReadDecoder)
// Forward declare root types
namespace System::Xml {
class IncrementalReadDecoder;
}
// Write type traits
MARK_REF_T(::System::Xml::IncrementalReadDecoder*);
DEFINE_IL2CPP_CLASS(::System::Xml::IncrementalReadDecoder*, "System.Xml", "IncrementalReadDecoder");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IncrementalReadDecoder
class CORDL_TYPE IncrementalReadDecoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsFull)) bool  IsFull;

/// @brief Method Decode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Decode(::ArrayW<char16_t>  chars, int32_t  startPos, int32_t  len) ;

static inline ::System::Xml::IncrementalReadDecoder* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsFull, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsFull() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncrementalReadDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IncrementalReadDecoder(IncrementalReadDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncrementalReadDecoder(IncrementalReadDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::IncrementalReadDecoder) == 0x10, "Size mismatch!");

} // namespace end def System::Xml
