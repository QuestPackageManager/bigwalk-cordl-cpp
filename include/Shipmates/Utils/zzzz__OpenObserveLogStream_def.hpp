#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveLogStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenObserveLogStream)
namespace Shipmates::Utils {
class OpenObserveLogIndex;
}
// Forward declare root types
namespace Shipmates::Utils {
class OpenObserveLogStream;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::OpenObserveLogStream*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveLogStream*, "Shipmates.Utils", "OpenObserveLogStream");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.OpenObserveLogStream
class CORDL_TYPE OpenObserveLogStream : public ::System::Object {
public:
// Declarations
/// @brief Field index, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) ::Shipmates::Utils::OpenObserveLogIndex*  index;

static inline ::Shipmates::Utils::OpenObserveLogStream* New_ctor(::StringW  passedIndex) ;

constexpr ::Shipmates::Utils::OpenObserveLogIndex* const& __cordl_internal_get_index() const;

constexpr ::Shipmates::Utils::OpenObserveLogIndex*& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_index(::Shipmates::Utils::OpenObserveLogIndex*  value) ;

/// @brief Method .ctor, addr 0x181acbe30, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  passedIndex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveLogStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveLogStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenObserveLogStream(OpenObserveLogStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveLogStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenObserveLogStream(OpenObserveLogStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21066};

/// @brief Field index, offset: 0x10, size: 0x8, def value: None
 ::Shipmates::Utils::OpenObserveLogIndex*  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveLogStream, ___index) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveLogStream) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::Utils
