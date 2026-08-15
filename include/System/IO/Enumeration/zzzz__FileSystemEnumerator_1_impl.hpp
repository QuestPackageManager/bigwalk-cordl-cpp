#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerator_1.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename TResult>
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__originalRootDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalRootDirectory;
}
template<typename TResult>
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__originalRootDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalRootDirectory;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__originalRootDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalRootDirectory = value;
}
template<typename TResult>
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__rootDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootDirectory;
}
template<typename TResult>
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__rootDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootDirectory;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__rootDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootDirectory = value;
}
template<typename TResult>
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
template<typename TResult>
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__options(::System::IO::EnumerationOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____options = value;
}
template<typename TResult>
constexpr ::System::Object*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
template<typename TResult>
constexpr ::System::Object* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
template<typename TResult>
constexpr ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__entry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entry;
}
template<typename TResult>
constexpr ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__entry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entry;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__entry(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entry = value;
}
template<typename TResult>
constexpr TResult& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
template<typename TResult>
constexpr TResult const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__current(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
template<typename TResult>
constexpr ::System::IntPtr& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename TResult>
constexpr ::System::IntPtr const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__buffer(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
template<typename TResult>
constexpr int32_t& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__bufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
template<typename TResult>
constexpr int32_t const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__bufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__bufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferLength = value;
}
template<typename TResult>
constexpr ::System::IntPtr& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__directoryHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____directoryHandle;
}
template<typename TResult>
constexpr ::System::IntPtr const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__directoryHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____directoryHandle;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__directoryHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____directoryHandle = value;
}
template<typename TResult>
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__currentPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPath;
}
template<typename TResult>
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__currentPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPath;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__currentPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPath = value;
}
template<typename TResult>
constexpr bool& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lastEntryFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEntryFound;
}
template<typename TResult>
constexpr bool const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lastEntryFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEntryFound;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__lastEntryFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastEntryFound = value;
}
template<typename TResult>
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::IntPtr,::StringW>>*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__pending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pending;
}
template<typename TResult>
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::IntPtr,::StringW>>* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__pending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pending;
}
template<typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__pending(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::IntPtr,::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pending = value;
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::GetDataUWP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"GetDataUWP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TResult>
inline ::System::IntPtr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CreateRelativeDirectoryHandleUWP(::System::ReadOnlySpan_1<char16_t>  relativePath, ::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"CreateRelativeDirectoryHandleUWP", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, relativePath, fullPath);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::_ctor(::StringW  directory, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directory, options);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CloseDirectoryHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"CloseDirectoryHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::System::IntPtr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CreateDirectoryHandle(::StringW  path, bool  ignoreNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"CreateDirectoryHandle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, path, ignoreNotFound);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ContinueOnDirectoryError(int32_t  error, bool  ignoreNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"ContinueOnDirectoryError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error, ignoreNotFound);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"FindNextEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DequeueNextDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"DequeueNextDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalDispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"InternalDispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TResult>
inline ::System::IntPtr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CreateRelativeDirectoryHandle(::System::ReadOnlySpan_1<char16_t>  relativePath, ::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"CreateRelativeDirectoryHandle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, relativePath, fullPath);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldIncludeEntry(::by_ref<::System::IO::Enumeration::FileSystemEntry>  entry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldRecurseIntoEntry(::by_ref<::System::IO::Enumeration::FileSystemEntry>  entry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
template<typename TResult>
inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::TransformEntry(::by_ref<::System::IO::Enumeration::FileSystemEntry>  entry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, entry);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::OnDirectoryFinished(::System::ReadOnlySpan_1<char16_t>  directory)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directory);
}
template<typename TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ContinueOnError(int32_t  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error);
}
template<typename TResult>
inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TResult>
inline ::System::Object* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DirectoryFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"DirectoryFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::New_ctor(::StringW  directory, ::System::IO::EnumerationOptions*  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(directory, options));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template<typename TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
template<typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TResult>
constexpr ::System::IDisposable* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TResult>
constexpr ::System::Collections::IEnumerator* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FileSystemEnumerator_1()   {
}
