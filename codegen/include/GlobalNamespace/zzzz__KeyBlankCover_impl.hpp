#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyBlankCover.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__KeyBlankCover_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeyBlankCover.Bite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlankCover::*)()>(&::GlobalNamespace::KeyBlankCover::Bite)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180409fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlankCover*>(),
                        {"Bite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlankCover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlankCover::*)()>(&::GlobalNamespace::KeyBlankCover::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlankCover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::KeyBlankCover::__cordl_internal_get_stages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stages;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::KeyBlankCover::__cordl_internal_get_stages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stages;
}
constexpr void GlobalNamespace::KeyBlankCover::__cordl_internal_set_stages(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stages = value;
}
constexpr int32_t& GlobalNamespace::KeyBlankCover::__cordl_internal_get_currentStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStage;
}
constexpr int32_t const& GlobalNamespace::KeyBlankCover::__cordl_internal_get_currentStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStage;
}
constexpr void GlobalNamespace::KeyBlankCover::__cordl_internal_set_currentStage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStage = value;
}
inline void GlobalNamespace::KeyBlankCover::Bite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlankCover*>(),
                        {"Bite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KeyBlankCover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlankCover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KeyBlankCover* GlobalNamespace::KeyBlankCover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KeyBlankCover*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyBlankCover::KeyBlankCover()   {
}
