#pragma once
// IWYU pragma private; include "Unity/Multiplayer/PlayMode/CurrentPlayerApi.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Multiplayer/PlayMode/zzzz__CurrentPlayerApi_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayerApi.ReadOnlyTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::Unity::Multiplayer::PlayMode::CurrentPlayerApi::*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayerApi::ReadOnlyTags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822ed980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(),
                    {::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayerApi._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Multiplayer::PlayMode::CurrentPlayerApi::*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayerApi::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d1e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Unity::Multiplayer::PlayMode::CurrentPlayerApi::__cordl_internal_get_m_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Unity::Multiplayer::PlayMode::CurrentPlayerApi::__cordl_internal_get_m_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Tags;
}
constexpr void Unity::Multiplayer::PlayMode::CurrentPlayerApi::__cordl_internal_set_m_Tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Tags = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* Unity::Multiplayer::PlayMode::CurrentPlayerApi::ReadOnlyTags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline void Unity::Multiplayer::PlayMode::CurrentPlayerApi::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Multiplayer::PlayMode::CurrentPlayerApi* Unity::Multiplayer::PlayMode::CurrentPlayerApi::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>());
}
// Ctor Parameters []
constexpr ::Unity::Multiplayer::PlayMode::CurrentPlayerApi::CurrentPlayerApi()   {
}
