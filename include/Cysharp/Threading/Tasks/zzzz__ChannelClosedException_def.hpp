#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ChannelClosedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChannelClosedException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class ChannelClosedException;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::ChannelClosedException*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ChannelClosedException*, "Cysharp.Threading.Tasks", "ChannelClosedException");
// Dependencies System.InvalidOperationException
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ChannelClosedException
class CORDL_TYPE ChannelClosedException : public ::System::InvalidOperationException {
public:
// Declarations
static inline ::Cysharp::Threading::Tasks::ChannelClosedException* New_ctor() ;

static inline ::Cysharp::Threading::Tasks::ChannelClosedException* New_ctor(::System::Exception*  innerException) ;

static inline ::Cysharp::Threading::Tasks::ChannelClosedException* New_ctor(::StringW  message) ;

static inline ::Cysharp::Threading::Tasks::ChannelClosedException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x181e5e360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181e5e370, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x181e32f20, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x181e5e390, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelClosedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelClosedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelClosedException(ChannelClosedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelClosedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelClosedException(ChannelClosedException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14189};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::ChannelClosedException) == 0x90, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
