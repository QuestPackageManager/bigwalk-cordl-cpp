#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectSpawnJobLinearHolder.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjSpawnJobLinear_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJobLinearHolder_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::*)()>(&::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::ObjSpawnJobLinear& JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::JBooth::MicroVerseCore::ObjSpawnJobLinear const& JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_set_job(::JBooth::MicroVerseCore::ObjSpawnJobLinear  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___job = value;
}
constexpr ::Unity::Jobs::JobHandle& JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::Unity::Jobs::JobHandle const& JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_set_handle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
inline void JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder* JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder::ObjectSpawnJobLinearHolder()   {
}
