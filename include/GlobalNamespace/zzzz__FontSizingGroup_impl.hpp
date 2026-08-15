#pragma once
// IWYU pragma private; include "GlobalNamespace/FontSizingGroup.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FontSizingGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FontSizingGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontSizingGroup::*)()>(&::GlobalNamespace::FontSizingGroup::OnEnable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803e7640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontSizingGroup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontSizingGroup::*)()>(&::GlobalNamespace::FontSizingGroup::OnDisable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803e7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontSizingGroup.OnRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontSizingGroup::*)()>(&::GlobalNamespace::FontSizingGroup::OnRefresh)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803e7840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {"OnRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontSizingGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontSizingGroup::*)()>(&::GlobalNamespace::FontSizingGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>>& GlobalNamespace::FontSizingGroup::__cordl_internal_get_textInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textInstances;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>> const& GlobalNamespace::FontSizingGroup::__cordl_internal_get_textInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textInstances;
}
constexpr void GlobalNamespace::FontSizingGroup::__cordl_internal_set_textInstances(::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textInstances = value;
}
inline void GlobalNamespace::FontSizingGroup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontSizingGroup::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontSizingGroup::OnRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {"OnRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontSizingGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontSizingGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FontSizingGroup* GlobalNamespace::FontSizingGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FontSizingGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontSizingGroup::FontSizingGroup()   {
}
