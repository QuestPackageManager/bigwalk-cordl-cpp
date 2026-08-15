#pragma once
// IWYU pragma private; include "System/TimeZoneNotFoundException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(TimeZoneNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TimeZoneNotFoundException;
}
// Write type traits
MARK_REF_T(::System::TimeZoneNotFoundException*);
DEFINE_IL2CPP_CLASS(::System::TimeZoneNotFoundException*, "System", "TimeZoneNotFoundException");
// Dependencies System.Exception
namespace System {
// Is value type: false
// CS Name: System.TimeZoneNotFoundException
class CORDL_TYPE TimeZoneNotFoundException : public ::System::Exception {
public:
// Declarations
static inline ::System::TimeZoneNotFoundException* New_ctor() ;

static inline ::System::TimeZoneNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x18170eab0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18161dc10, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneNotFoundException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneNotFoundException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneNotFoundException(TimeZoneNotFoundException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneNotFoundException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneNotFoundException(TimeZoneNotFoundException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::TimeZoneNotFoundException) == 0x90, "Size mismatch!");

} // namespace end def System
