#pragma once
// IWYU pragma private; include "GlobalNamespace/NameShuffler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NameShuffler_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedSeed_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NameShuffler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NameShuffler::*)()>(&::GlobalNamespace::NameShuffler::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180425b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NameShuffler.Shuffle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NameShuffler::*)(int32_t)>(&::GlobalNamespace::NameShuffler::Shuffle)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180425b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {"Shuffle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NameShuffler.Shuffle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NameShuffler::*)()>(&::GlobalNamespace::NameShuffler::Shuffle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180425cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {"Shuffle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NameShuffler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NameShuffler::*)()>(&::GlobalNamespace::NameShuffler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::NameShuffler::__cordl_internal_get_names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___names;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::NameShuffler::__cordl_internal_get_names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___names;
}
constexpr void GlobalNamespace::NameShuffler::__cordl_internal_set_names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___names = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::NameShuffler::__cordl_internal_get_textComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textComponent;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::NameShuffler::__cordl_internal_get_textComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textComponent;
}
constexpr void GlobalNamespace::NameShuffler::__cordl_internal_set_textComponent(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textComponent = value;
}
constexpr ::UnityW<::GlobalNamespace::NetworkedSeed>& GlobalNamespace::NameShuffler::__cordl_internal_get_networkedSeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedSeed;
}
constexpr ::UnityW<::GlobalNamespace::NetworkedSeed> const& GlobalNamespace::NameShuffler::__cordl_internal_get_networkedSeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedSeed;
}
constexpr void GlobalNamespace::NameShuffler::__cordl_internal_set_networkedSeed(::UnityW<::GlobalNamespace::NetworkedSeed>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedSeed = value;
}
inline void GlobalNamespace::NameShuffler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NameShuffler::Shuffle(int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {"Shuffle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void GlobalNamespace::NameShuffler::Shuffle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {"Shuffle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NameShuffler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NameShuffler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NameShuffler* GlobalNamespace::NameShuffler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NameShuffler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NameShuffler::NameShuffler()   {
}
