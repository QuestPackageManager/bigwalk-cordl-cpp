#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjJobHolder.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJob_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJob_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjJobHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjJobHolder::*)()>(&::JBooth::MicroVerseCore::ObjJobHolder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18141d1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_objBendJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objBendJob;
}
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob const& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_objBendJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objBendJob;
}
constexpr void JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_set_objBendJob(::JBooth::MicroVerseCore::ObjectSpawnJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objBendJob = value;
}
constexpr ::Unity::Jobs::JobHandle& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::Unity::Jobs::JobHandle const& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_set_handle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transforms;
}
constexpr void JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_set_transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transforms = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>*& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>* const& JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void JBooth::MicroVerseCore::ObjJobHolder::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
inline void JBooth::MicroVerseCore::ObjJobHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjJobHolder* JBooth::MicroVerseCore::ObjJobHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjJobHolder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjJobHolder::ObjJobHolder()   {
}
