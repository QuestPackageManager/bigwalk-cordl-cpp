#pragma once
// IWYU pragma private; include "Unity/Multiplayer/PlayMode/CurrentPlayerApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CurrentPlayerApi)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Unity::Multiplayer::PlayMode {
class CurrentPlayerApi;
}
// Write type traits
MARK_REF_T(::Unity::Multiplayer::PlayMode::CurrentPlayerApi*);
DEFINE_IL2CPP_CLASS(::Unity::Multiplayer::PlayMode::CurrentPlayerApi*, "Unity.Multiplayer.PlayMode", "CurrentPlayerApi");
// Dependencies System.Object
namespace Unity::Multiplayer::PlayMode {
// Is value type: false
// CS Name: Unity.Multiplayer.PlayMode.CurrentPlayerApi
class CORDL_TYPE CurrentPlayerApi : public ::System::Object {
public:
// Declarations
/// @brief Field m_Tags, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Tags, put=__cordl_internal_set_m_Tags)) ::System::Collections::Generic::List_1<::StringW>*  m_Tags;

static inline ::Unity::Multiplayer::PlayMode::CurrentPlayerApi* New_ctor() ;

/// @brief Method ReadOnlyTags, addr 0x1822ed980, size 0x10, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ReadOnlyTags() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Tags() ;

constexpr void __cordl_internal_set_m_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1805d1e50, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentPlayerApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentPlayerApi", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentPlayerApi(CurrentPlayerApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentPlayerApi", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentPlayerApi(CurrentPlayerApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21606};

/// @brief Field m_Tags, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_Tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Multiplayer::PlayMode::CurrentPlayerApi, ___m_Tags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Multiplayer::PlayMode::CurrentPlayerApi) == 0x18, "Size mismatch!");

} // namespace end def Unity::Multiplayer::PlayMode
